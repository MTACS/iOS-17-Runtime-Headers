
@interface CNChangeNotifierDarwinWrapper : NSObject <CNChangeNotifierWrapper>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addObserver:(id)arg1 notification:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)removeObserver:(id)arg1 notification:(id)arg2;

@end
