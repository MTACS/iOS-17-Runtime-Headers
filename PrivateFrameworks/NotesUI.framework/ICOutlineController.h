
@interface ICOutlineController : NSObject {
    void ancestorMap;
    void collapsedUUIDs;
    void textStorage;
}

@property (nonatomic, copy) NSDictionary *ancestorMap;
@property (nonatomic, retain) NSTextStorage *textStorage;

- (void).cxx_destruct;
- (id)ancestorMap;
- (void)collapseUUIDs:(id)arg1;
- (void)expandUUIDs:(id)arg1;
- (id)init;
- (id)initWithTextStorage:(id)arg1;
- (bool)isUUIDCollapsed:(id)arg1;
- (void)setAncestorMap:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (id)textStorage;
- (void)toggleUUIDCollapsed:(id)arg1;
- (void)update;

@end
