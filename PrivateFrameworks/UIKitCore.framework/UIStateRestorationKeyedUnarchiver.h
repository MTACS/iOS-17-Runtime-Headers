
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {
    NSDictionary * _defaultValues;
}

- (void)dealloc;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(bool)arg3;

@end
