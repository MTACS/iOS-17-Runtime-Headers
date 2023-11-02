
@protocol ICCreateNoteAction <NSObject>

@required

- (NSManagedObject<ICSearchIndexableNote> *)performWithTitle:(NSString *)arg1 contents:(NSAttributedString *)arg2 error:(id*)arg3;

@end
