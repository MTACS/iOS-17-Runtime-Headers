
@interface _UIPasteboardOptions : NSObject {
    NSDate * _expirationDate;
    bool  _localOnly;
    bool  _pinned;
}

@property (nonatomic, retain) NSDate *expirationDate;
@property (getter=isLocalOnly, nonatomic) bool localOnly;
@property (getter=isPinned, nonatomic) bool pinned;

+ (id)optionsWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)initWithOptionsDictionary:(id)arg1;
- (bool)isLocalOnly;
- (bool)isPinned;
- (void)setExpirationDate:(id)arg1;
- (void)setLocalOnly:(bool)arg1;
- (void)setPinned:(bool)arg1;

@end
