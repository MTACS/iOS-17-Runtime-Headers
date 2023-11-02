
@interface LCFBiomeManager : NSObject {
    BMSource * _biomeSource;
    BMStream * _biomeStream;
}

@property (nonatomic, retain) BMSource *biomeSource;
@property (nonatomic, readonly) BMStream *biomeStream;

- (void).cxx_destruct;
- (id)biomeSource;
- (id)biomeStream;
- (id)init:(id)arg1;
- (id)readData:(id)arg1 endDate:(id)arg2 reversed:(bool)arg3;
- (id)readDataWithTimestamp:(id)arg1 endDate:(id)arg2 reversed:(bool)arg3;
- (id)readTimeStamps:(id)arg1 endDate:(id)arg2 reversed:(bool)arg3;
- (void)setBiomeSource:(id)arg1;
- (bool)writeData:(id)arg1;

@end
