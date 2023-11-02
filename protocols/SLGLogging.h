
@protocol SLGLogging <NSObject>

@required

- (bool)isEnabled;
- (void)logBlock:(void *)arg1 domain:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, void*, NSString *
- (void)logBlock:(void *)arg1 domain:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, void*, NSString *, id /* block */, void*, void, id /* block */, bool, NSError *, void*
- (void)logBlock:(void *)arg1 domain:(void *)arg2 tags:(void *)arg3; // needs 3 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, void*, NSString *, id /* block */, void*, NSArray *, id /* block */, void*
- (void)logBlock:(void *)arg1 domain:(void *)arg2 tags:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, void*, NSString *, id /* block */, void*, NSArray *, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*

@end
