
@protocol AMSSQLiteConnectionDelegate <NSObject>

@optional

- (bool)connectionNeedsResetForCorruption:(AMSSQLiteConnection *)arg1;

@end
