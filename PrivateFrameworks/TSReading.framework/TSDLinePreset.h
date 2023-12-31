
@interface TSDLinePreset : NSObject {
    TSDLineEnd * mHeadLineEnd;
    TSDStroke * mStroke;
    TSDLineEnd * mTailLineEnd;
}

@property (nonatomic, readonly, copy) TSDLineEnd *headLineEnd;
@property (nonatomic, readonly, copy) TSDStroke *stroke;
@property (nonatomic, readonly, copy) TSDLineEnd *tailLineEnd;

+ (id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;

- (void)dealloc;
- (id)headLineEnd;
- (id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)stroke;
- (id)tailLineEnd;

@end
