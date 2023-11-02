
@interface BRCMigrationParameters : NSObject <NSSecureCoding> {
    bool  cloneOnly;
    bool  dropAccountFile;
    bool  dropClientState;
    NSError * errorOverride;
    unsigned long long  originatorIdOverride;
}

@property bool cloneOnly;
@property bool dropAccountFile;
@property bool dropClientState;
@property (retain) NSError *errorOverride;
@property unsigned long long originatorIdOverride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cloneOnly;
- (bool)dropAccountFile;
- (bool)dropClientState;
- (void)encodeWithCoder:(id)arg1;
- (id)errorOverride;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)originatorIdOverride;
- (void)setCloneOnly:(bool)arg1;
- (void)setDropAccountFile:(bool)arg1;
- (void)setDropClientState:(bool)arg1;
- (void)setErrorOverride:(id)arg1;
- (void)setOriginatorIdOverride:(unsigned long long)arg1;

@end
