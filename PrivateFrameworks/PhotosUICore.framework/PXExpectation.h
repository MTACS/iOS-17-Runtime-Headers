
@interface PXExpectation : NSObject {
    NSDate * _creationDate;
    id /* block */  _handler;
    NSString * _label;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_performHandlerWithSuccess:(bool)arg1 error:(id)arg2;
- (id)creationDate;
- (id)description;
- (void)fulfill;
- (id /* block */)handler;
- (id)init;
- (id)initWithLabelFormat:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 labelFormat:(id)arg2;
- (id)label;
- (void)performWhenFulfilled:(id /* block */)arg1 timeout:(double)arg2;
- (id)queue;
- (void)setHandler:(id /* block */)arg1;

@end
