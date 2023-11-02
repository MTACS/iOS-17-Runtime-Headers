
@interface SNFileListingResult : NSObject <SNResult> {
    void fileItems;
}

@property (nonatomic, readonly) NSArray *fileItems;

- (void).cxx_destruct;
- (id)fileItems;
- (id)init;
- (id)initWithFileItems:(id)arg1;

@end
