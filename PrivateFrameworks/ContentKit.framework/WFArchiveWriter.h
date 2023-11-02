
@interface WFArchiveWriter : NSObject {
    struct archive { } * _archive;
}

@property (nonatomic, readonly) struct archive { }*archive;

- (struct archive { }*)archive;
- (void)dealloc;
- (bool)finishWithError:(id*)arg1;
- (id)initWithDestinationURL:(id)arg1 format:(id)arg2 error:(id*)arg3;
- (bool)writeArchiveEntry:(id)arg1 error:(id*)arg2;

@end
