
@interface _PASArgOption : NSObject {
    NSString * _argMetavar;
    NSString * _helpDescription;
    int  _longOptionFlag;
    NSString * _name;
    bool  _required;
    NSString * _shortName;
}

@property (nonatomic, readonly, copy) NSString *argMetavar;
@property (nonatomic, readonly, copy) NSString *helpDescription;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool required;
@property (nonatomic, readonly, copy) NSString *shortName;

+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4;
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(bool)arg5;
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 help:(id)arg3;

- (void).cxx_destruct;
- (id)argMetavar;
- (id)description;
- (id)helpDescription;
- (id)initWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(bool)arg5;
- (id)name;
- (bool)required;
- (id)shortName;

@end
