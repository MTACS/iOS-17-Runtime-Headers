
@interface MeasureFoundation.WorldPoint : MeasureFoundation.MeasureObject {
    void _anchor;
    void _type;
    void delegate;
    void lines;
    void parentLine;
    void partOfRectangleId;
    void snapLine;
    void triangulationAnchor;
}

@property (nonatomic, copy) NSArray *lines;
@property (nonatomic) long long state;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)init;
- (id)lines;
- (void)setLines:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (long long)type;

@end
