
@interface _RKResponse : NSObject {
    NSString * _headword;
    NSString * _speechAct;
    NSString * _text;
}

@property (readonly, copy) NSString *headword;
@property (readonly, copy) NSString *speechAct;
@property (readonly, copy) NSString *text;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)headword;
- (id)init;
- (id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)speechAct;
- (id)text;
- (unsigned long long)type;

@end
