
@interface TCVegaCGCanvas : TCVegaHTMLElement <TCVegaCGCanvasInterface> {
    TCVegaCGContext * context;
}

@property (nonatomic, retain) TCVegaCGContext *context;
@property double height;
@property double width;

- (void).cxx_destruct;
- (id)context;
- (id)getContext:(id)arg1;
- (double)height;
- (id)init;
- (void)setContext:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
