
@interface CPParagraphListItem : NSObject <CPDisposable> {
    CPList * list;
    int  number;
    struct __CFArray { } * paragraphs;
}

@property (nonatomic, retain) CPList *list;
@property (nonatomic) int number;

- (void)addParagraph:(id)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)init;
- (id)list;
- (int)number;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
- (void)setList:(id)arg1;
- (void)setNumber:(int)arg1;

@end
