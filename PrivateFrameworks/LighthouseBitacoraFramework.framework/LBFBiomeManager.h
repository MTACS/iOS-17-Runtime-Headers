
@interface LBFBiomeManager : NSObject {
    BMSource * _biomeSource;
    BMStream * _biomeStream;
}

@property (nonatomic, retain) BMSource *biomeSource;
@property (nonatomic, readonly) BMStream *biomeStream;

- (void).cxx_destruct;
- (id)biomeSource;
- (id)biomeStream;
- (bool)enumerateData:(id)arg1 endDate:(id)arg2 reversed:(bool)arg3 shouldContinue:(id /* block */)arg4;
- (id)init:(id)arg1;
- (id)readData:(id)arg1 endDate:(id)arg2;
- (void)setBiomeSource:(id)arg1;
- (bool)writeData:(id)arg1;

@end
