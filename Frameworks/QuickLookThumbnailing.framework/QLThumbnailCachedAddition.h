
@interface QLThumbnailCachedAddition : NSObject {
    GSAddition * _addition;
    unsigned long long  _fileID;
}

@property (retain) GSAddition *addition;

- (void).cxx_destruct;
- (id)addition;
- (unsigned long long)hash;
- (id)initWithAddition:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStillValid;
- (void)setAddition:(id)arg1;

@end
