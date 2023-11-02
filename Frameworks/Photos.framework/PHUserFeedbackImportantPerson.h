
@interface PHUserFeedbackImportantPerson : NSObject {
    NSString * _personUUID;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *personUUID;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithPersonUUID:(id)arg1 type:(unsigned long long)arg2;
- (id)personUUID;
- (unsigned long long)type;

@end
