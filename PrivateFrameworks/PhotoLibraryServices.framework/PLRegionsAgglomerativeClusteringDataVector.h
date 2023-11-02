
@interface PLRegionsAgglomerativeClusteringDataVector : NSObject {
    double * _data;
    unsigned long long  _length;
    id  _userInfo;
}

@property (readonly) double*data;
@property (readonly) unsigned long long length;
@property (retain) id userInfo;

- (void).cxx_destruct;
- (double*)data;
- (void)dealloc;
- (id)initWithDataLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
