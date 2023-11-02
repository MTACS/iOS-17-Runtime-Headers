
@interface AVMetadataGroup : NSObject

@property (nonatomic, readonly) NSString *classifyingLabel;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) NSString *uniqueID;

+ (void)initialize;

- (id)classifyingLabel;
- (struct opaqueCMFormatDescription { }*)copyFormatDescription;
- (id)items;
- (id)uniqueID;

@end
