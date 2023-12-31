
@interface FCGroupCancelHandler : NSObject <FCOperationCanceling> {
    NSArray * _cancelHandlers;
}

@property (nonatomic, copy) NSArray *cancelHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)groupCancelHandlerWithCancelHandlers:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)cancelHandlers;
- (id)initWithCancelHandlers:(id)arg1;
- (void)setCancelHandlers:(id)arg1;

@end
