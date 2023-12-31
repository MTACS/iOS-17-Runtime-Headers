
@protocol QLListCellDataGenerationOperationDelegate <NSObject>

@required

- (void)operation:(QLListCellDataGenerationOperation *)arg1 didDetermineFileSize:(NSNumber *)arg2 fileTypeString:(NSString *)arg3;
- (void)operation:(QLListCellDataGenerationOperation *)arg1 didGenerateThumbnail:(UIImage *)arg2;

@end
