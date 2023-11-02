
@interface CRUpdateProgressCommand : NSObject <CRCommand> {
    bool  _animatesProgress;
    unsigned long long  _event;
    NSProgress * _progress;
    unsigned long long  commandDirection;
    NSDictionary * userInfo;
}

@property (nonatomic) bool animatesProgress;
@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long event;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (bool)animatesProgress;
- (unsigned long long)commandDirection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)event;
- (id)init;
- (id)progress;
- (void)setAnimatesProgress:(bool)arg1;
- (void)setCommandDirection:(unsigned long long)arg1;
- (void)setEvent:(unsigned long long)arg1;
- (void)setProgress:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
