
@interface TRIDynamicNamespaceRecord : NSObject <NSCopying, NSSecureCoding> {
    TRIAppContainer * _appContainer;
    int  _cloudKitContainer;
    unsigned int  _compatibilityVersion;
    NSURL * _defaultsFileURL;
    bool  _hasFetched;
    NSString * _name;
    NSString * _teamId;
}

@property (nonatomic, readonly) TRIAppContainer *appContainer;
@property (nonatomic, readonly) int cloudKitContainer;
@property (nonatomic, readonly) unsigned int compatibilityVersion;
@property (nonatomic, readonly) NSURL *defaultsFileURL;
@property (nonatomic, readonly) bool hasFetched;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *teamId;

+ (id)dynamicNamespaceRecordWithName:(id)arg1 teamId:(id)arg2 appContainer:(id)arg3 cloudKitContainer:(int)arg4 compatibilityVersion:(unsigned int)arg5 defaultsFileURL:(id)arg6 hasFetched:(bool)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appContainer;
- (int)cloudKitContainer;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementAppContainer:(id)arg1;
- (id)copyWithReplacementCloudKitContainer:(int)arg1;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;
- (id)copyWithReplacementDefaultsFileURL:(id)arg1;
- (id)copyWithReplacementHasFetched:(bool)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithReplacementTeamId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)defaultEncodeWithCoder:(id)arg1;
- (id)defaultsFileURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasFetched;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 teamId:(id)arg2 appContainer:(id)arg3 cloudKitContainer:(int)arg4 compatibilityVersion:(unsigned int)arg5 defaultsFileURL:(id)arg6 hasFetched:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDynamicNamespaceRecord:(id)arg1;
- (id)name;
- (id)teamId;

@end
