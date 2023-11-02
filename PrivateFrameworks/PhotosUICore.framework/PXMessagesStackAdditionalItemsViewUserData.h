
@interface PXMessagesStackAdditionalItemsViewUserData : NSObject <PXGViewUserData> {
    struct { 
        unsigned long long count; 
        long long type; 
    }  _additionalItemsCount;
}

@property (nonatomic, readonly) struct { unsigned long long x1; long long x2; } additionalItemsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct { unsigned long long x1; long long x2; })additionalItemsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAdditionalItemsCount:(struct { unsigned long long x1; long long x2; })arg1;

@end
