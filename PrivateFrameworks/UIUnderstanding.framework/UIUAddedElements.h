
@interface UIUAddedElements : NSObject {
    NSString * _groupID;
    NSArray * _results;
    AddedElementsCompat * _underlyingObject;
}

@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, retain) NSArray *results;
@property (readonly) AddedElementsCompat *underlyingObject;

- (void).cxx_destruct;
- (id)groupID;
- (id)initWithContents:(id)arg1;
- (id)results;
- (void)setGroupID:(id)arg1;
- (void)setResults:(id)arg1;
- (id)underlyingObject;

@end
