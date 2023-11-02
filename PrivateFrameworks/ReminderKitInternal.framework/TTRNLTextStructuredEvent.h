
@interface TTRNLTextStructuredEvent : NSObject {
    void * _structuredEvent;
}

@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) TTRNLTextStructuredEventRecurrentEvent *recurrentEvent;
@property (nonatomic) void*structuredEvent;

- (void)dealloc;
- (id)initWithStructuredEvent:(void*)arg1;
- (id)locations;
- (id)recurrentEvent;
- (void)setStructuredEvent:(void*)arg1;
- (void*)structuredEvent;

@end
