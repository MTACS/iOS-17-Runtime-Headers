
@interface WFArchiveReader : NSObject {
    struct archive { } * _archive;
}

@property (nonatomic, readonly) struct archive { }*archive;

- (struct archive { }*)archive;
- (id)extractArchiveToDestinationURL:(id)arg1 error:(id*)arg2;
- (id)initWithArchiveFile:(id)arg1 error:(id*)arg2;

@end
