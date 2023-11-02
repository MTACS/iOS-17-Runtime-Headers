
@interface SearchUIWatchListButtonRequest : NSObject {
    NSString * _identifier;
    bool  _isHorizontallySrollingStyle;
    int  _type;
}

@property (retain) NSString *identifier;
@property bool isHorizontallySrollingStyle;
@property int type;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isHorizontallySrollingStyle;
- (void)setIdentifier:(id)arg1;
- (void)setIsHorizontallySrollingStyle:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
