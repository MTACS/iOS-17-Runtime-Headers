
@interface FCHLSSegment : NSObject {
    double  _duration;
    FCHLSKey * _key;
    FCHLSMap * _map;
    NSURL * _url;
}

- (void).cxx_destruct;
- (id)description;

@end
