
@protocol MKPublisherIconProvider

@required

- (void)iconForPublisherNamed:(void *)arg1 usingId:(void *)arg2 contentScale:(void *)arg3 onCompletion:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned int, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (UIImage *)iconForPublisherNamed:(NSString *)arg1 usingId:(unsigned int)arg2 usingContentScale:(double)arg3 usingSizeGroup:(unsigned long long)arg4 isNightMode:(bool)arg5;

@end
