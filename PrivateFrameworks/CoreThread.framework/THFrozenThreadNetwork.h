
@interface THFrozenThreadNetwork : NSObject {
    NSDate * _creationDate;
    THThreadNetworkCredentialsDataSet * _credentialsDataSet;
    NSDate * _lastModificationDate;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) THThreadNetworkCredentialsDataSet *credentialsDataSet;
@property (nonatomic, readonly) NSDate *lastModificationDate;

- (void).cxx_destruct;
- (id)creationDate;
- (id)credentialsDataSet;
- (id)initWithCredentialsDataSet:(id)arg1 creationDate:(id)arg2 lastModificationDate:(id)arg3;
- (id)lastModificationDate;

@end
