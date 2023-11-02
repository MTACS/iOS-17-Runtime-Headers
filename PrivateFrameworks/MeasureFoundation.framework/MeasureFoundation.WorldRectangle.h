
@interface MeasureFoundation.WorldRectangle : MeasureFoundation.MeasureObject {
    void data;
    void edges;
    void expirationAction;
    void expirationTime;
    void expirationTimer;
    void rectangleDataBuffer;
    void splitters;
}

@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)init;
- (void)setState:(long long)arg1;
- (long long)state;

@end
