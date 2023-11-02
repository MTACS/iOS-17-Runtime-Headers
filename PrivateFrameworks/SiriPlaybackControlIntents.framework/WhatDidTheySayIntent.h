
@interface WhatDidTheySayIntent : INIntent

@property (nonatomic, retain) Device *device;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSDate *startTime;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
