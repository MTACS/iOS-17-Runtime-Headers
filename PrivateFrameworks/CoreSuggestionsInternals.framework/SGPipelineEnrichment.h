
@interface SGPipelineEnrichment : SGEntity {
    NSData * _contentHash;
    bool  _pendingGeocode;
}

@property (nonatomic, retain) NSData *contentHash;
@property (nonatomic) bool pendingGeocode;

+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)birthday:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)instantMessageAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;
+ (id)socialProfile:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionInfo:(id)arg7;

- (void).cxx_destruct;
- (id)contentHash;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned long long)arg2 extractionInfo:(id)arg3 curated:(bool)arg4 parent:(id)arg5 value:(id)arg6 context:(id)arg7 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (bool)isEvent;
- (bool)isPerson;
- (id)loggingIdentifier;
- (bool)pendingGeocode;
- (void)setContentHash:(id)arg1;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setPendingGeocode:(bool)arg1;
- (id)toCloudKitRecordWithId:(id)arg1 parentEntityType:(long long)arg2;

@end
