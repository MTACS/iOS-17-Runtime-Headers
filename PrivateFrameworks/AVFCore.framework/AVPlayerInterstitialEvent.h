
@interface AVPlayerInterstitialEvent : NSObject <NSCopying> {
    struct OpaqueFigPlayerInterstitialEvent { } * _figEvent;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    AVPlayerItem * _primaryItem;
    NSArray * _templateItems;
}

@property (nonatomic, readonly) bool alignsResumptionWithPrimarySegmentBoundary;
@property (nonatomic, readonly) bool alignsStartWithPrimarySegmentBoundary;
@property (nonatomic, readonly) NSDictionary *assetListResponse;
@property (nonatomic, readonly) NSString *cue;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } playoutLimit;
@property (nonatomic, readonly) AVPlayerItem *primaryItem;
@property (nonatomic, readonly) unsigned long long restrictions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } resumptionOffset;
@property (nonatomic, readonly) NSArray *templateItems;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) NSDictionary *userDefinedAttributes;
@property (nonatomic, readonly) bool willPlayOnce;

+ (id)interstitialEventWithPrimaryItem:(id)arg1 date:(id)arg2;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 identifier:(id)arg2 date:(id)arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 playoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 userDefinedAttributes:(id)arg8;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 identifier:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 playoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 userDefinedAttributes:(id)arg8;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 templateItems:(id)arg2 figEvent:(struct OpaqueFigPlayerInterstitialEvent { }*)arg3;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)newItemArrayWithCopiedItems:(id)arg1;

- (void).cxx_destruct;
- (id)_internalTemplateItems;
- (bool)alignsResumptionWithPrimarySegmentBoundary;
- (bool)alignsStartWithPrimarySegmentBoundary;
- (id)assetListResponse;
- (id)assetURLsReturningError:(id*)arg1;
- (void)checkMutability;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cue;
- (id)date;
- (void)dealloc;
- (id)description;
- (struct OpaqueFigPlayerInterstitialEvent { }*)figEvent;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPrimaryItem:(id)arg1 identifier:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 date:(id)arg4 templateItems:(id)arg5 restrictions:(unsigned long long)arg6 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 playoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 userDefinedAttributes:(id)arg9;
- (id)initWithPrimaryItem:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 date:(id)arg3;
- (id)initWithPrimaryItemAndFigEvent:(id)arg1 templateItems:(id)arg2 figEvent:(struct OpaqueFigPlayerInterstitialEvent { }*)arg3;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playoutLimit;
- (id)primaryItem;
- (unsigned long long)restrictions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })resumptionOffset;
- (void)setAlignsResumptionWithPrimarySegmentBoundary:(bool)arg1;
- (void)setAlignsStartWithPrimarySegmentBoundary:(bool)arg1;
- (void)setCue:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImmutable;
- (void)setPlayoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPrimaryItem:(id)arg1;
- (void)setRestrictions:(unsigned long long)arg1;
- (void)setResumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTemplateItems:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUserDefinedAttributes:(id)arg1;
- (void)setWillPlayOnce:(bool)arg1;
- (id)templateItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)userDefinedAttributes;
- (bool)validate:(int*)arg1;
- (bool)willPlayOnce;

@end
