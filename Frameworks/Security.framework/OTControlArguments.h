
@interface OTControlArguments : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _containerName;
    NSString * _contextID;
}

@property (retain) NSString *altDSID;
@property (retain) NSString *containerName;
@property (retain) NSString *contextID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)containerName;
- (id)contextID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithContainerName:(id)arg1 contextID:(id)arg2 altDSID:(id)arg3;
- (id)makeConfigurationContext;
- (void)setAltDSID:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setContextID:(id)arg1;

@end
