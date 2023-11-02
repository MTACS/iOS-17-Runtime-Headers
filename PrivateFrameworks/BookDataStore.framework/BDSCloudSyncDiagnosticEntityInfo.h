
@interface BDSCloudSyncDiagnosticEntityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _dirtyCloudDataInfos;
    bool  _enabledSync;
    NSString * _name;
}

@property (nonatomic, retain) NSArray *dirtyCloudDataInfos;
@property (nonatomic) bool enabledSync;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *stateForLog;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dirtyCloudDataInfos;
- (bool)enabledSync;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 enabledSync:(bool)arg2 dirtyCloudDataInfos:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setDirtyCloudDataInfos:(id)arg1;
- (void)setEnabledSync:(bool)arg1;
- (void)setName:(id)arg1;
- (id)stateForLog;

@end
