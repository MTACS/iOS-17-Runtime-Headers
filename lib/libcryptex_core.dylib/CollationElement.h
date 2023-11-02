
@interface CollationElement : NSObject {
    NSString * _cle_bundle_id;
    NSString * _cle_bundle_version;
    NSString * _cle_command;
    NSArray * _cle_command_args;
    NSDictionary * _cle_env;
    NSString * _cle_mnt_path;
    long long  _cle_scope;
}

@property (nonatomic, readonly, retain) NSString *cle_bundle_id;
@property (nonatomic, readonly, retain) NSString *cle_bundle_version;
@property (readonly, copy) NSString *cle_command;
@property (readonly, retain) NSArray *cle_command_args;
@property (readonly, retain) NSDictionary *cle_env;
@property (readonly, retain) NSString *cle_mnt_path;
@property (nonatomic, readonly) long long cle_scope;

+ (id)scopeToString:(long long)arg1;

- (void).cxx_destruct;
- (id)cle_bundle_id;
- (id)cle_bundle_version;
- (id)cle_command;
- (id)cle_command_args;
- (id)cle_env;
- (id)cle_mnt_path;
- (long long)cle_scope;
- (id)copyAbsolutePath:(id)arg1;
- (id)description;
- (id)initWithBundle:(id)arg1 version:(id)arg2 atPath:(id)arg3 withScope:(long long)arg4 withCommand:(id)arg5 withCommandArgs:(id)arg6 withEnv:(id)arg7;
- (id)initWithXPC:(id)arg1;
- (id)package;

@end
