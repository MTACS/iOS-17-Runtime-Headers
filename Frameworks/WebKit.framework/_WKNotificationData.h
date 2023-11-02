
@interface _WKNotificationData : NSObject {
    unsigned long long  _alert;
    NSString * _body;
    struct RetainPtr<NSDictionary> { 
        void *m_ptr; 
    }  _dictionaryRepresentation;
    NSString * _identifier;
    NSString * _origin;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) unsigned long long alert;
@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *origin;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)alert;
- (id)body;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithCoreData:(const void*)arg1 dataStore:(id)arg2;
- (id)origin;
- (id)title;
- (id)userInfo;

@end
