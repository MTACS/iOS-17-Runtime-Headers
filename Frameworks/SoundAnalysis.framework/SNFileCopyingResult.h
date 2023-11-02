
@interface SNFileCopyingResult : NSObject <SNResult> {
    void fileSize;
    void filename;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemURL;
}

@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSURL *itemURL;

- (void).cxx_destruct;
- (long long)fileSize;
- (id)filename;
- (id)init;
- (id)initWithFileItem:(id)arg1;
- (id)itemURL;

@end
