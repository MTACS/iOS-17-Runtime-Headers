
@interface KGErrorMarker : NSObject {
    NSURL * _fileURL;
}

- (void).cxx_destruct;
- (void)createWithComment:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (bool)markerExists;
- (id)readComment;
- (void)removeMarker;

@end
