
@interface ADCapService : NSObject {
    ADCapData * _capData;
}

@property (nonatomic, retain) ADCapData *capData;

- (void).cxx_destruct;
- (id)capData;
- (void)cleanDownloadData;
- (id)clickCountByLine;
- (id)impressionCountByLine;
- (id)init;
- (void)setCapData:(id)arg1;
- (void)updateCapData:(id)arg1 forType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateClickData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDownloadData:(id)arg1 identifier:(id)arg2 forType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)updateFrequencyCapData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
