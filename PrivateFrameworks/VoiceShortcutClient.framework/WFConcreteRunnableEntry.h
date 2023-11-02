
@interface WFConcreteRunnableEntry : NSObject <NSSecureCoding> {
    WFIcon * _accessoryIcon;
    WFIcon * _entryIcon;
    NSString * _identifier;
    NSString * _name;
    <WFPropertyListObject> * _serializedParameterState;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) WFIcon *accessoryIcon;
@property (nonatomic, readonly) WFIcon *entryIcon;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) <WFPropertyListObject> *serializedParameterState;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIcon;
- (void)encodeWithCoder:(id)arg1;
- (id)entryIcon;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 entryIcon:(id)arg3 accessoryIcon:(id)arg4 serializedParameterState:(id)arg5;
- (id)name;
- (id)serializedParameterState;
- (id)uniqueIdentifier;

@end
