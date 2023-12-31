
@interface TSTRichTextPayload : TSPObject <TSPCopying> {
    TSWPStorage * mStorage;
}

@property (nonatomic, retain) TSWPStorage *storage;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 storage:(id)arg2;
- (id)initWithStorage:(id)arg1;
- (bool)requiresRichText;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)string;

@end
