
@interface TRIPBStruct : TRIPBMessage

@property (nonatomic, retain) NSMutableDictionary *fields;
@property (nonatomic, readonly) unsigned long long fields_Count;
@property (nonatomic, readonly, copy) NSDictionary *mlr_dictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto

+ (id)descriptor;

// Image: /System/Library/PrivateFrameworks/MLRuntime.framework/MLRuntime

- (id)mlr_arrayWithTRIPBListValue:(id)arg1;
- (id)mlr_dictionaryRepresentation;
- (id)mlr_objectForTRIPBValue:(id)arg1;

@end
