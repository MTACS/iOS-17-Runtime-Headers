
@protocol _IKJSImpression <IKJSImpression, JSExport>

@required

- (NSArray *)children;
- (NSString *)data;
- (NSString *)impressionQueueTag;
- (long long)index;
- (id)parent;
- (NSArray *)timestamps;

@end
