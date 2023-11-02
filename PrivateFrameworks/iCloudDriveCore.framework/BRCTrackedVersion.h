
@interface BRCTrackedVersion : NSObject <NSCopying> {
    NSString * _etagIfLoser;
    BRFileObjectID * _fileObjectID;
}

@property (nonatomic, readonly) NSString *etagIfLoser;
@property (nonatomic, readonly) BRFileObjectID *fileObjectID;

+ (id)trackedVersionFor:(id)arg1 withEtagIfLoser:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)etagIfLoser;
- (id)fileObjectID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
