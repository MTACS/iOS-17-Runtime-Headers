
@protocol GDVisualIdentifierView

@required

- (void)enumeratePeopleMatchingName:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDVisualIdentifierViewPerson *, bool*, void*
- (void)enumeratePeopleWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDVisualIdentifierViewPerson *, bool*, void*
- (GDVisualIdentifierViewPerson *)personForIdentifier:(NSString *)arg1;

@end
