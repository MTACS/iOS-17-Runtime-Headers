
@interface CUINamedRecognitionObject : CUINamedLookup

@property (nonatomic, readonly) NSData *objectData;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransformation;
@property (nonatomic, readonly) long long version;

- (id)description;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (id)objectData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransformation;
- (long long)version;

@end
