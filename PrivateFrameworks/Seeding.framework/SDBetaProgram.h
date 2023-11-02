
@interface SDBetaProgram : NSObject <NSSecureCoding> {
    long long  _accountID;
    NSString * _assetAudience;
    NSURL * _assetBrain;
    NSURL * _assetUpdate;
    NSString * _buildPrefix;
    NSURL * _catalog;
    NSArray * _legalDocs;
    unsigned long long  _platform;
    long long  _program;
    long long  _programID;
    NSString * _title;
}

@property (nonatomic) long long accountID;
@property (nonatomic, retain) NSString *assetAudience;
@property (nonatomic, retain) NSURL *assetBrain;
@property (nonatomic, retain) NSURL *assetUpdate;
@property (nonatomic, retain) NSString *buildPrefix;
@property (nonatomic, retain) NSURL *catalog;
@property (nonatomic, retain) NSArray *legalDocs;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) long long program;
@property (nonatomic) long long programID;
@property (nonatomic, retain) NSString *title;

+ (id)betaProgramWithID:(long long)arg1 title:(id)arg2 program:(id)arg3 catalog:(id)arg4 assetUpdate:(id)arg5 assetBrain:(id)arg6 assetAudience:(id)arg7 legalDocs:(id)arg8 platform:(unsigned long long)arg9 buildPrefix:(id)arg10 accountID:(long long)arg11;
+ (id)betaProgramWithJSON:(id)arg1;
+ (bool)isPad;
+ (id)nilIfNSNull:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountID;
- (id)assetAudience;
- (id)assetBrain;
- (id)assetUpdate;
- (id)buildPrefix;
- (id)catalog;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(long long)arg1 title:(id)arg2 program:(id)arg3 catalog:(id)arg4 assetUpdate:(id)arg5 assetBrain:(id)arg6 assetAudience:(id)arg7 legalDocs:(id)arg8 platform:(unsigned long long)arg9 buildPrefix:(id)arg10 accountID:(long long)arg11;
- (id)legalDocs;
- (unsigned long long)platform;
- (long long)program;
- (long long)programID;
- (void)setAccountID:(long long)arg1;
- (void)setAssetAudience:(id)arg1;
- (void)setAssetBrain:(id)arg1;
- (void)setAssetUpdate:(id)arg1;
- (void)setBuildPrefix:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setLegalDocs:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setProgram:(long long)arg1;
- (void)setProgramID:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
