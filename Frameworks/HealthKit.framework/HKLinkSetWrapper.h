
@interface HKLinkSetWrapper : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  orderedSet;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)appendingElement:(id)arg1;
- (id)appendingElements:(id)arg1;
- (long long)count;
- (id)description;
- (id)elements;
- (long long)hash;
- (id)init;
- (id)initWithLinks:(id)arg1;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (id)insertingElement:(id)arg1 index:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mergingLegacyElementsArray:(id)arg1;
- (id)mergingLinkSet:(id)arg1;
- (id)movingElementFrom:(long long)arg1 to:(long long)arg2;
- (id)removingAll;
- (id)removingAtIndex:(long long)arg1;
- (id)removingLinksWithUUID:(id)arg1;
- (id)replacingElementAt:(long long)arg1 withElement:(id)arg2;
- (id)retargetingLinksWithUUID:(id)arg1 newUUID:(id)arg2;
- (id)serializedDataWithError:(id*)arg1;
- (id)swappingElementsAt:(long long)arg1 andAt:(long long)arg2;

@end
