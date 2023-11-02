
@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding> {
    NSString * _actionClassName;
    NSDictionary * _classNamesByType;
}

@property (nonatomic, readonly, copy) NSString *actionClassName;
@property (nonatomic, readonly) NSString *catalystInterfaceClassName;
@property (nonatomic, readonly, copy) NSDictionary *classNamesByType;
@property (nonatomic, readonly) bool isCatalystInterfaceRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionClassName;
- (id)catalystInterfaceClassName;
- (id)classNamesByType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionClassName:(id)arg1 classNamesByType:(id)arg2 attribution:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isCatalystInterfaceRequest;

@end
