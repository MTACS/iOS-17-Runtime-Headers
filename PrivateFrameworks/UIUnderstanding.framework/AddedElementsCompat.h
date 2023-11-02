
@interface AddedElementsCompat : NSObject {
    void dedupeElements;
    void groupID;
}

@property (nonatomic, readonly) NSArray *dedupeElements;
@property (nonatomic, readonly) NSString *groupID;

- (void).cxx_destruct;
- (id)dedupeElements;
- (id)groupID;
- (id)init;
- (id)initWithGroupID:(id)arg1 dedupeElements:(id)arg2;

@end
