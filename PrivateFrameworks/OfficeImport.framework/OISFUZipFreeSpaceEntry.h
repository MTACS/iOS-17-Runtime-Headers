
@interface OISFUZipFreeSpaceEntry : NSObject {
    unsigned long long  length;
    unsigned long long  offset;
}

- (long long)compareByOffset:(id)arg1;

@end