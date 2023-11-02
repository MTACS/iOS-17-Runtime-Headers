
@interface TDPhotoshopLayer : NSManagedObject

@property (nonatomic, retain) TDPhotoshopLayer *childLayer;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) TDPhotoshopLayer *parentLayer;
@property (nonatomic, retain) TDPhotoshopRenditionSpec *rendition;

- (id)hierarchicalLayerNames;

@end
