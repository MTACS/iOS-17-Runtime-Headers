
@interface MBFileSystemSnapshot : NSObject {
    NSDate * _creationDate;
    NSString * _name;
    NSString * _uuid;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (id)initWithName:(id)arg1 uuid:(id)arg2 creationDate:(id)arg3;
- (id)name;
- (void)setCreationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
