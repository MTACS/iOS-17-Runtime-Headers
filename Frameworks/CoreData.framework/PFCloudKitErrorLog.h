
@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray * _entries;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
