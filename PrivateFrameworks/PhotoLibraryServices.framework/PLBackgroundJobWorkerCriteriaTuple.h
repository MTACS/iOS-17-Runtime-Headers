
@interface PLBackgroundJobWorkerCriteriaTuple : NSObject {
    PLBackgroundJobCriteria * _criteria;
    PLBackgroundJobWorker * _worker;
}

@property (nonatomic, readonly) PLBackgroundJobCriteria *criteria;
@property (nonatomic, readonly) PLBackgroundJobWorker *worker;

- (void).cxx_destruct;
- (id)criteria;
- (id)description;
- (unsigned long long)hash;
- (id)initWithWorker:(id)arg1 withCriteria:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)worker;

@end
